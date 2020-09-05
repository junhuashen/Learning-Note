#!/bin/bash

read -p "input path:" FilePath;
function  getAllFiles()
{
	fileList=`ls problems_*`
	for file_name in $fileList
	do
		if [ -f $file_name ]; then
			#echo $file_name;
			file_arry=(${file_name//./ });
			file_type=${file_arry[1]};
			string2=${file_arry[0]};
			new_array=(${string2//_/ });
			new_file_name=${new_array[0]}"_"${new_array[2]}"_"${new_array[1]}"."${file_type};
			mv $file_name $new_file_name;
			echo "mv $file_name $new_file_name";
		elif test -d $file_name; then
			cd $file_name;
			FilePath=`pwd`;
			getAllFiles;
			cd ..;
		else
			echo "$FilePath is a invalid path";
		fi
	done
}

cd $FilePath;
getAllFiles;
echo "DONE";
