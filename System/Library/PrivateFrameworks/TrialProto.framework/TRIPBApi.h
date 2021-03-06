/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString, NSMutableArray, TRIPBSourceContext;

@interface TRIPBApi : TRIPBMessage

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) NSMutableArray * methodsArray; 
@property (nonatomic,readonly) unsigned long long methodsArray_Count; 
@property (nonatomic,retain) NSMutableArray * optionsArray; 
@property (nonatomic,readonly) unsigned long long optionsArray_Count; 
@property (nonatomic,copy) NSString * version; 
@property (nonatomic,retain) TRIPBSourceContext * sourceContext; 
@property (assign,nonatomic) BOOL hasSourceContext; 
@property (nonatomic,retain) NSMutableArray * mixinsArray; 
@property (nonatomic,readonly) unsigned long long mixinsArray_Count; 
@property (assign,nonatomic) int syntax; 
+(id)descriptor;
@end

