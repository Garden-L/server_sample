pipeline {
    agent any
    
    stages {
        stage('git clone') {
            steps {
                git 'https://github.com/SOUTH-KOREAN/server_sample.git'
            }
        }
        
        stage('install nodejs') {
            steps {
                sh "sudo yum install -y nodejs"
            }
        }
               
    }
}
