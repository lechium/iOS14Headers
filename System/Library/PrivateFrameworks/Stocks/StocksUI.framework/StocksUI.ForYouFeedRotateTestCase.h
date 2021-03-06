/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Stocks/StocksUI.framework/StocksUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SNTestCaseRotate.h>

@class NSString, NSArray;

@interface StocksUI.ForYouFeedRotateTestCase : NSObject <SNTestCaseRotate> {

	 testName;
	 timeoutInSeconds;
	 aggregate;
	 requiredCapabilities;
	 rotateOrientation;

}

@property (readonly,nonatomic) NSString * testName; 
@property (readonly,nonatomic) double timeoutInSeconds; 
@property (readonly,nonatomic) unsigned long long aggregate; 
@property (readonly,nonatomic) NSArray * requiredCapabilities; 
@property (readonly,nonatomic) long long rotateOrientation; 
-(NSString *)testName;
-(unsigned long long)aggregate;
-(double)timeoutInSeconds;
-(long long)rotateOrientation;
-(id)init;
-(NSArray *)requiredCapabilities;
@end

