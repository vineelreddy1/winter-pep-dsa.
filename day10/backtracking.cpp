// //is valid sudoku
// #include<iostream>
// #include<vector>


// bool sol(vector<char>& board){
//     for(int r=0;r<9;r++){
//         for(int c= 0;c < 9;c++){
//             if(board[r][c]='.'){
//                 for(char num='1';num<=9;num++)
//                 {
//                     if(isValid(board,r,c,num)){
//                         board[r][c] = num;

//                         if(solve(board))return true;
//                         board[r][c]='.';
//                     }
//                 }
//             }
//             return true;
//         }
//     }

// }

// bool isvalid(vector<vector<char>>&board,int row,int col,char c){
//     for(int i=0;i<9;i++){
//         if(board[i][col] == c)return false;
//         if(board[row][j] == c)return false;

//         if(board[3*])

//     }
// }