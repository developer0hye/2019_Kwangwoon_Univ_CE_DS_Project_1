# 2019_Kwangwoon_Univ_CE_DS_Project_1
2019년도 광운대학교 컴퓨터정보공학부  데이터 구조 설계 및 실습 1차 프로젝트 스켈레톤 코드

과제 진행에 앞서 정기적으로 Update Notes 를 읽고 업데이트된 내용이 무엇이 있는지 확인하신 후 진행바랍니다.

### 좋은 질문들

[질문 1. BST 클래스의 "<<" operator 에서 m_root 호출하기 위해 함수를 정의하고 사용했더니 문법 오류가 뜹니다.](https://github.com/developer0hye/2019_Kwangwoon_Univ_CE_DS_Project_1/issues/2)

## Update Notes

Please check this before you work on your project.

+) If you find some errors or any issues, feel free to upload the issue on this repository or contact by email.

robotmanyh@naver.com

quswngud3@kw.ac.kr

2019-09-10 

first upload

2019-09-14

remove the constructor in class ***BinarySearchTree***

```
BinarySearchTree(SoccerPlayerData& data); -> You don't need to implement and use this constructor.
```

2019-09-16

modified the implementation of operator "<<" in class ***TreeNode*** and add functions to access the *m_left* and *m_right*.

Before
```
...
friend std::ostream& operator<<(std::ostream& os, const TreeNode* node)
{
  // fill in your code to print in-order traversal of a binary search tree
	return os;
}
...
```

After
```
...
TreeNode* getLeftNode() const { return m_left; } -> newly added function
TreeNode* getRightNode() const { return m_right; } -> newly added function

friend std::ostream& operator<<(std::ostream& os, const TreeNode* node) -> you don't need to modify this function.
{
	os << node->m_data;
	return os;
}
...
```

## How to install?

Open the Ubuntu terminal and type the below commands.

```
sudo apt-get install git
git clone https://github.com/developer0hye/2019_Kwangwoon_Univ_CE_DS_Project_1.git
cd 2019_Kwangwoon_Univ_CE_DS_Project_1/
```

## How to build and run?

```
make
./run ShootForLog.txt property(>=1664)
```

examples)

If owner of a club gives you 350 billion won ...

```
./run ShootForLog.txt 3500
```

If owner of a club gives you 450 billion won ...

```
./run ShootForLog.txt 4500
```

## How can I check whether my code is correct?

We are now working on that. It will be released within 3 weeks.

## Etc.

![i13582752589](https://user-images.githubusercontent.com/35001605/64621711-1f8f3900-d421-11e9-83ac-ef74a74d0875.gif)

프로젝트를 할지 말지 고민하는 수강생

![jbox1J4](https://user-images.githubusercontent.com/35001605/64623394-da203b00-d423-11e9-92c8-c6b335e8a870.gif)

프로젝트를 구현하는 수강생의 일그러진 표정

![8704575b939586f42381144f0aa5c442](https://user-images.githubusercontent.com/35001605/64623429-e7d5c080-d423-11e9-828b-eeab7deeab64.gif)

프로젝트를 모두 마친 수강생

