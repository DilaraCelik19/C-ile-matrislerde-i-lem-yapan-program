#include <stdio.h>
#include <stdlib.h>
#include "matrixLib.h"
/*main.c Dosyası
 Matrislerde ve vektörlerde bizden istenen birtakım işlemleri yapan bir proje.
 1.Proje
 04.12.2022
 Dilara Çelik dilara_celik@stu.fsm.edu.tr

*/
int main(int arguman,char **args)
{
  if(arguman!=2){
    printf("Error");

  }else{
    int seed=atoi(args[1]); 
    

    float *vec = returnVector(5);
    fillVector(vec,5,seed);
    printVector(5, vec);
    printf("\n");
    printf("Mean of numbers:%.1f\n", mean(vec, 5));
    printf("**************** \n");
    free(vec);

    float *vec1 = returnVector(3);
    fillVector(vec1,3,seed);
    float *vec2 = returnVector(3);
    fillVector(vec2,3,seed);
    printVector(3, vec1);
    printf("\n");
    printVector(3, vec2);
    printf("\n");
    printf("Correlation of vectors:%.1f\n", correlation(vec1, vec2, 3));
    printf("**************** \n");
    
   

    float **matris1 = returnMatrix(3, 2);
    fillMatrix(matris1,3,2,seed);
    printMatrix(matris1, 3, 2);
    printf("\n");
    float **matris2 = returnMatrix(2, 5);
    fillMatrix(matris2,2,5,seed);
    printMatrix(matris2, 2, 5);
    printf("\n");
    float **multiplication = matrixMultiplication(matris1, matris2, 3, 2, 2, 5);
    printf("Multiplication of matrix \n");
    printMatrix(multiplication, 3, 5);
    printf("**********************\n");
    
    

    float **matrix = returnMatrix(3, 4);
    fillMatrix(matrix,3,4,seed);
    printMatrix(matrix, 3, 4);
    printf("\n");
    float **matrix2 = matrixTranspose(matrix, 3, 4);
    printf("Transpose of matrix\n");
    printMatrix(matrix2, 4, 3);
    printf("**********************\n");
    
    

    float **mat = returnMatrix(2, 4);
    fillMatrix(mat,2,4,seed);
    printMatrix(mat, 2, 4);
    printf("\n");
    float *rowMatris = rowMeans(mat, 2, 4);
    printf("Mean of rows\n");
    printVector(2, rowMatris);
    printf("**********************\n");
    printf("\n");  
    

    float **matt = returnMatrix(2, 4);
    fillMatrix(matt,2,4,seed);
    printMatrix(matt, 2, 4);
    printf("\n");
    float *columnMatris = columnMeans(matt, 2, 4);
    printf("Mean of columns \n");
    printVector(4, columnMatris);
    printf("**********************\n");
    printf("\n");   
    

    float **covMatrix = returnMatrix(3, 3);
    fillMatrix(covMatrix,3,3,seed);
    printMatrix(covMatrix, 3, 3);
    printf("\n");
    float **result = covarianceMatrix(covMatrix, 3, 3);
    printf("Covariance of matrix \n");
    printMatrix(result, 3, 3);
    printf("**********************\n");
   
    

    float **matrisDet = returnMatrix(3, 3);
    fillMatrix(matrisDet,3,3,seed);
    printMatrix(matrisDet, 3, 3);
    printf("\n");
    printf("Determinant :%f", determinant(matrisDet, 3));
    
   

   free(vec);
   free(vec1);
   free(vec2);
   free(matris1);
   free(matris2);
   free(matrix);
   free(matrix2);
   free(mat);
   free(rowMatris);
   free(matt);
   free(columnMatris);
   free(covMatrix);
   free(result);
   free(matrisDet);
   

  }
   

    return 0;
}