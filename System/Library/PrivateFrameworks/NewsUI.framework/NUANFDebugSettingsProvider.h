/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUANFDebugSettingsProvider.h>

@protocol NUANFDebugSettingsProvider <NSObject>
@property (readonly,nonatomic) BOOL viewportDebuggingEnabled; 
@property (readonly,nonatomic) BOOL testingConditionEnabled; 
@required
-(void)addObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(void)removeObserver:(id)arg1;
-(BOOL)testingConditionEnabled;
-(BOOL)viewportDebuggingEnabled;

@end


@class NSString;

@interface NUANFDebugSettingsProvider : NSObject <NUANFDebugSettingsProvider> {

	BOOL _viewportDebuggingEnabled;
	BOOL _testingConditionEnabled;

}

@property (nonatomic,readonly) BOOL viewportDebuggingEnabled;              //@synthesize viewportDebuggingEnabled=_viewportDebuggingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL testingConditionEnabled;               //@synthesize testingConditionEnabled=_testingConditionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)testingConditionEnabled;
-(BOOL)viewportDebuggingEnabled;
@end

