/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _WBSSafariCyclerConfigurationCommand : NSObject {

	NSString* _name;
	NSString* _help;
	NSString* _usage;
	unsigned long long _minimumArgumentCount;
	unsigned long long _maximumArgumentCount;
	id _target;
	SEL _action;

}

@property (nonatomic,copy,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * help;                               //@synthesize help=_help - In the implementation block
@property (nonatomic,copy) NSString * usage;                                       //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) unsigned long long minimumArgumentCount;              //@synthesize minimumArgumentCount=_minimumArgumentCount - In the implementation block
@property (assign,nonatomic) unsigned long long maximumArgumentCount;              //@synthesize maximumArgumentCount=_maximumArgumentCount - In the implementation block
@property (assign,nonatomic,__weak) id target;                                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                           //@synthesize action=_action - In the implementation block
-(NSString *)help;
-(id)initWithName:(id)arg1 help:(id)arg2 ;
-(void)setArgumentCount:(unsigned long long)arg1 ;
-(BOOL)invokeWithParameters:(id)arg1 ;
-(unsigned long long)minimumArgumentCount;
-(void)setMinimumArgumentCount:(unsigned long long)arg1 ;
-(unsigned long long)maximumArgumentCount;
-(void)setMaximumArgumentCount:(unsigned long long)arg1 ;
-(NSString *)usage;
-(SEL)action;
-(void)setUsage:(NSString *)arg1 ;
-(id)init;
-(void)setAction:(SEL)arg1 ;
-(id)target;
-(NSString *)name;
-(void)setTarget:(id)arg1 ;
@end

