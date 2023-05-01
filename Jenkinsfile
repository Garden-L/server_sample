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
                sh "npm install"
            }
        }
        
        stage('open server') {
            steps {
                sh 'sudo node src/server.js'
            }
        }
         stage('Build') {
            steps {
                sh 'echo "Build started"'
            }
            steps {
                sh 'echo "Build completed"'
            }
        }
    }
}
