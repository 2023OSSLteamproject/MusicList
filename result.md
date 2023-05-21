#### 각 함수에 대한 실행결과 


## selectMenu// 처음에 메뉴를 선택할 수 있게 보여주는 함수, printf를 이용하여 0~8가지의 메뉴를 보여주고 그 중에서 하나를 선택할 수 있게 코드를 짬
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/a14ac293-baa8-4ed2-b591-cf0ea9dd4c79>


## listMusic // 상단바에서 보여주는 모든 것을 읽는 함수, 리스트를 조회할때 그 안에 있는 음악리스트를 읽어주는 역할을 함 
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/38325819-b0a4-46dc-8f57-842a3f8d1271>


*search시 사용자가 원하는 번호만 보여주도록 기획함.
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/aa4abd07-0f8a-4e36-b6c6-c68be6af5cfe>


## addMusic // 음악을 추가하는 함수 , 노래제목과 가수명과 재생횟수, 다운여부 그리고 띄어쓰기가 안되는 간단한메모들을 입력받아 노래리스트를 추가해준다. 
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/f21b108f-7ace-4460-b875-a2c4d4dd8567>
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/449197aa-d42a-4d6a-a8c8-ac09c2c78011>

*메모 시 공백 추가 안 됨. 
*무조건 다운로드 여부 표시 시 Y/N으로 입력.

## readMusic // 현 음악리스트를 보여주는 함수, 현재 조회를 할 때 이 함수를 이용하여 리스트를 보여준다. 
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/ed27a118-4089-41e1-baee-c377fa1932ea>


## deleteMusic// 음악을 리스트에서 삭제하는 함수(삭제시 그 해당번호만 지워지고 그 후 그대로 번호를 유지한다. (내림차순xx))
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/48bf2fb2-6053-4dd6-a4f6-1ee181107eff>


## updateMusic// 음악 리스트를 수정하는 함수, 내 음악리스트에서 수정하고 싶은 음악이 있다면 번호를 선택하고 노래 제목과 가수명,재생횟수,다운여부,메모를 수정할 수 있다. 
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/2bf37f31-e5e7-4034-b5dd-5722442b022f>


## downMusic   // 노래다운로드 하는 함수, 노래다운을 하면 n->y로 변경된다.다운이 되어있는 상태여도 다운을 할 수 있다.
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/13811b30-704d-4634-a955-c681ee97f330>


## listenMusic // 노래 듣는 횟수 함수, 노래횟수를 1회씩 증가시킨다 (ex. 1->2, 4->5) 노래를 얼만큼 들었는지 알 수 있다. 
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/1bed3a5d-609e-4103-9997-39e7d7f7c850>



## searchMusic// 음악을 검색하는 함수, 노래제목을 검색하면 해당 노래의 정보들을 볼 수 있다. 

<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/b3e99e14-4fe6-417b-82ad-27679b7ba4dd>

## saveData // 데이터를 파일에 저장하는 함수, 내가 추가,수정,삭제,다운한 노래리스트를 .txt 파일에 저장하여 언제든 다시 볼 수 있다. 
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/c6f47a8b-fe63-4872-a9ee-3c2f4f85a2d1>
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/6f6bb08e-a746-4648-bb68-0af1dfc35417>



## loadData // 파일에 저장된 데이터를 불러오는 함수
<img src=https://github.com/2023OSSLteamproject/MusicList/assets/130717706/1dd14d4e-3e76-4b48-bd94-dee745b290ea>

