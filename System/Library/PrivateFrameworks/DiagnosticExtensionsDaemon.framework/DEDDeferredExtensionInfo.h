/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEDSecureArchiving.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DEDExtensionIdentifier, NSDate, NSDictionary;

@interface DEDDeferredExtensionInfo : NSObject <DEDSecureArchiving, NSSecureCoding> {

	BOOL _scheduled;
	NSString* _activityString;
	NSString* _bugSessionIdentifier;
	DEDExtensionIdentifier* _dedIdentifier;
	NSDate* _triggerDate;
	double _gracePeriod;
	NSDictionary* _parameters;

}

@property (readonly) NSString * bugSessionIdentifier;                     //@synthesize bugSessionIdentifier=_bugSessionIdentifier - In the implementation block
@property (readonly) DEDExtensionIdentifier * dedIdentifier;              //@synthesize dedIdentifier=_dedIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * triggerDate;                        //@synthesize triggerDate=_triggerDate - In the implementation block
@property (assign,nonatomic) double gracePeriod;                          //@synthesize gracePeriod=_gracePeriod - In the implementation block
@property (retain) NSDictionary * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (assign) BOOL scheduled;                                        //@synthesize scheduled=_scheduled - In the implementation block
@property (nonatomic,readonly) NSString * activityString;                 //@synthesize activityString=_activityString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)checkIn;
+(BOOL)supportsSecureCoding;
+(id)log;
+(id)allInfo;
+(id)archivedClasses;
+(id)activityStringForBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 ;
+(double)recommendedGracePeriodForDate:(id)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(double)gracePeriod;
-(NSDictionary *)parameters;
-(void)setGracePeriod:(double)arg1 ;
-(id)criteria;
-(void)run;
-(void)schedule;
-(void)setScheduled:(BOOL)arg1 ;
-(BOOL)isOverdue;
-(void)setTriggerDate:(NSDate *)arg1 ;
-(void)removeFromStore;
-(BOOL)scheduled;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)unschedule;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)triggerDate;
-(NSString *)activityString;
-(DEDExtensionIdentifier *)dedIdentifier;
-(NSString *)bugSessionIdentifier;
-(id)initWithBugSessionIdentifier:(id)arg1 dedIdentifier:(id)arg2 runOnDate:(id)arg3 withGracePeriod:(double)arg4 ;
-(void)addToStore;
@end
