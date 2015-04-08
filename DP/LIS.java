import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.*;

public class LIS {
	
	/* 
	 * 	First  approach for Calculating the Longest Increasing Subsequence
	 *
	 * Running Time O(N^3)
	 *	
	 */

	static ArrayList<Integer> calcSolution(int[] arr) throws Exception{
		ArrayList<ArrayList<Integer>> prev = new ArrayList<ArrayList<Integer>>(); 
		ArrayList<Integer> lis = new ArrayList<Integer>();
		
		lis.add(arr[0]);
		prev.add(lis);
		for(int i=1 ; i<arr.length ; i++){
			prev.add(new ArrayList<Integer>());
			for(int j=0 ; j<i ; j++){
				if( (arr[i] > arr[j]) && (prev.get(i).size() < (prev.get(j).size()+1)) ){
					prev.get(i).addAll(prev.get(j));
				}
			}
			prev.get(i).add(new Integer(arr[i]));
		}
		
		for(int i=0 ; i<prev.size() ; i++){
			for(int j=0 ; j<prev.get(i).size(); j++){
				System.out.print(prev.get(i).get(j));
			}
			System.out.println();
		}
		
		lis = prev.get(0);
		for(int i=1 ; i<prev.size() ; i++){
			if(prev.get(i).size() > lis.size()){
				lis = prev.get(i);
			}
		}
		
		return lis;
	}

	/*
	 * Second Approach for Calculating the Longest Increasing Subsequence
	 *
	 * Running Time is O(N*logN)
	 */
	
	

	public static void findLIS2(ArrayList<Integer> lis, int num){

		if(lis.get(lis.size()-1) < num) 
			lis.add(num);
		else{
			findFirstGreatest(lis, num, 0, (lis.size()-1));
		}

		return ;
	}	

	public static void findFirstGreatest(ArrayList<Integer> lis, int num, int start, int end){
		int mid = (start+end)/2;
		if(start == end){
			lis.set(start, num);
		}
		if(!(start < end)) return;
		if((lis.get(mid) >= num)){
			if (mid == 0){
				lis.set(mid, num);
				return;
			}
			else if(((mid != 0)&& (lis.get(mid-1) < num))){
				lis.set(mid, num);
				return;
			}
			else if(lis.get(mid-1) > num)
				findFirstGreatest(lis, num, start, mid);
		}else{
			findFirstGreatest(lis, num, mid+1, end);
		}
	}
	
	public static void main(String[] args) throws Exception{
		int count, num;
		Scanner sc = new Scanner(System.in);
		count = sc.nextInt();
		
		ArrayList<Integer> lis = new ArrayList<Integer>();
		
		for(int i=0 ; i<count ; i++){
			num = sc.nextInt();
			if(i == 0){
				lis.add(num);
				continue;
			}
			findLIS2(lis, num);
		}

		System.out.println(lis.size());
		
		sc.close();
	}
	}


