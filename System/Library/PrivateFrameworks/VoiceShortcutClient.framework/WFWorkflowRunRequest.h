/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class WFWorkflowRunDescriptor, NSString, NSDictionary, NSData, WFContentCollection;

@interface WFWorkflowRunRequest : NSObject <NSSecureCoding> {

	BOOL _isAutomationSuggestion;
	WFWorkflowRunDescriptor* _descriptor;
	unsigned long long _presentationMode;
	NSString* _runSource;
	NSString* _automationType;
	NSString* _trialID;
	NSDictionary* _listenerEndpoints;
	NSData* _archivedInput;
	WFContentCollection* _cachedInput;

}

@property (nonatomic,readonly) NSData * archivedInput;                            //@synthesize archivedInput=_archivedInput - In the implementation block
@property (nonatomic,retain) WFContentCollection * cachedInput;                   //@synthesize cachedInput=_cachedInput - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationMode;               //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,copy) NSString * runSource;                                  //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,copy) NSString * automationType;                             //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) BOOL isAutomationSuggestion;                         //@synthesize isAutomationSuggestion=_isAutomationSuggestion - In the implementation block
@property (nonatomic,copy) NSString * trialID;                                    //@synthesize trialID=_trialID - In the implementation block
@property (nonatomic,copy) NSDictionary * listenerEndpoints;                      //@synthesize listenerEndpoints=_listenerEndpoints - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)presentationMode;
-(void)setTrialID:(NSString *)arg1 ;
-(WFWorkflowRunDescriptor *)descriptor;
-(NSString *)runSource;
-(NSString *)trialID;
-(void)setRunSource:(NSString *)arg1 ;
-(id)initWithDescriptor:(id)arg1 input:(id)arg2 presentationMode:(unsigned long long)arg3 ;
-(void)getInputWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(BOOL)isAutomationSuggestion;
-(void)setIsAutomationSuggestion:(BOOL)arg1 ;
-(NSDictionary *)listenerEndpoints;
-(void)setListenerEndpoints:(NSDictionary *)arg1 ;
-(NSData *)archivedInput;
-(WFContentCollection *)cachedInput;
-(void)setCachedInput:(WFContentCollection *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
