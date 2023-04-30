pipeline {
    agent any
    
    stages() {
        stage('git clone') {
            steps {
                git 'https://github.com/SOUTH-KOREAN/server_sample.git'
            }
        }
        
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
               
    }
}
