/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaSnappy.framework/TeaSnappy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestRunOptions.h>

@protocol SNTestCase;
@class SNTestSuite, NSString;

@interface SNTestRun : NSObject <SNTestRunOptions> {

	id<SNTestCase> _testCase;
	SNTestSuite* _testSuite;

}

@property (nonatomic,readonly) id<SNTestCase> testCase;                 //@synthesize testCase=_testCase - In the implementation block
@property (nonatomic,readonly) SNTestSuite * testSuite;                 //@synthesize testSuite=_testSuite - In the implementation block
@property (nonatomic,readonly) long long orientation; 
@property (nonatomic,readonly) BOOL waitForCommitToFinish; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)waitForCommitToFinish;
-(long long)orientation;
-(SNTestSuite *)testSuite;
-(id<SNTestCase>)testCase;
-(id)initWithTestCase:(id)arg1 testSuite:(id)arg2 ;
-(void)setupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)runTestWithContext:(id)arg1 testCoordinator:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

