/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDictionary;

@interface WFRemoteQuarantineDecision : MTLModel <MTLJSONSerializing> {

	unsigned long long _policy;
	NSString* _errorTitle;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) unsigned long long policy;                        //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSString * errorTitle;                            //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                          //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
-(unsigned long long)policy;
-(NSString *)errorMessage;
-(NSString *)errorTitle;
@end

