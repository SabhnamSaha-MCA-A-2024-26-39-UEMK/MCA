public class SumOf2DArrays {
    public static void main(String[] args) {
        int[][] array1 = {
            {1, 2, 3},
            {4, 5, 6}
        };
        int[][] array2 = {
            {7, 8, 9},
            {10, 11, 12}
        };

        int rows = array1.length;
        int cols = array1[0].length;

        if (rows != array2.length || cols != array2[0].length) {
            System.out.println("Arrays must be of the same size to add.");
            return;
        }

        int[][] sum = new int[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sum[i][j] = array1[i][j] + array2[i][j];
            }
        }

        System.out.println("Sum of two 2D arrays:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }
    }
}
