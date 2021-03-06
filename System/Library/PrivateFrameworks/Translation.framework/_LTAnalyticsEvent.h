/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableDictionary, NSLocale;

@interface _LTAnalyticsEvent : NSObject {

	NSString* _eventName;
	double _startTime;
	double _endTime;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _fields;
	NSLocale* _sourceLocale;
	NSLocale* _targetLocale;

}

@property (nonatomic,copy) NSLocale * sourceLocale;              //@synthesize sourceLocale=_sourceLocale - In the implementation block
@property (nonatomic,copy) NSLocale * targetLocale;              //@synthesize targetLocale=_targetLocale - In the implementation block
+(id)timedEventWithName:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSLocale *)sourceLocale;
-(NSLocale *)targetLocale;
-(void)setSourceLocale:(NSLocale *)arg1 ;
-(void)setTargetLocale:(NSLocale *)arg1 ;
-(void)markStart;
-(void)addFieldsFromDictionary:(id)arg1 ;
-(void)addFieldsFromDictionary:(id)arg1 internalOnly:(BOOL)arg2 ;
-(void)markEnd;
-(void)addFieldsWithError:(id)arg1 ;
-(void)timestampWithName:(id)arg1 ;
-(void)sendLazy;
@end

