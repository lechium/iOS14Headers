/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSPSystemReadyProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPSystemReadyDelegate;
@class HDSPEnvironment, NSString;

@interface HDSPSimulatorReadyProvider : NSObject <HDSPSystemReadyProvider, HDSPEnvironmentAware> {

	HDSPEnvironment* _environment;
	id<HDSPSystemReadyDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL isSystemReady; 
@property (assign,nonatomic,__weak) id<HDSPSystemReadyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                   //@synthesize environment=_environment - In the implementation block
-(BOOL)isSystemReady;
-(id)initWithEnvironment:(id)arg1 ;
-(BOOL)isInDemoMode;
-(void)setDelegate:(id<HDSPSystemReadyDelegate>)arg1 ;
-(id<HDSPSystemReadyDelegate>)delegate;
-(HDSPEnvironment *)environment;
@end

