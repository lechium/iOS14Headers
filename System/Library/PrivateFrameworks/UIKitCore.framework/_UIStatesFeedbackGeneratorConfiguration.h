/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary, NSString;

@interface _UIStatesFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {

	NSDictionary* _stateChangeConfigurations;
	NSString* _initialState;

}

@property (nonatomic,retain) NSString * initialState;                               //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSDictionary * stateChangeConfigurations;              //@synthesize stateChangeConfigurations=_stateChangeConfigurations - In the implementation block
+(id)keyFromState:(id)arg1 toState:(id)arg2 ;
-(NSString *)initialState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setInitialState:(NSString *)arg1 ;
-(NSDictionary *)stateChangeConfigurations;
-(void)setStateChangeConfigurations:(NSDictionary *)arg1 ;
-(id)feedbackKeyPaths;
@end

