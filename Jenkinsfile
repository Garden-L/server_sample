pipeline {
    agent any
    
    stages {
        stage('git clone') {
            steps {
                git 'https://github.com/SOUTH-KOREAN/server_sample.git'
            }
        }
        
        stage("compile") {
            steps {
                sh "make"
            }
        }

        stage("test") {
            steps {
                sh './test --gtest_output="xml:testresults.xml"'
            }

            post {
                always {
                    junit './testresults.xml'
                }
            }
        }


    }
}
