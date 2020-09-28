/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartVideoCallIntentExport.h>

@class NSArray, NSString;

@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntentExport>

@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (assign,nonatomic) long long audioRoute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cd_sender;
-(long long)cd_interactionMechanism;
-(id)cd_groupName;
-(id)cd_recipients;
-(BOOL)cd_saveToPeopleStore;
-(id)verb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(void)setAudioRoute:(long long)arg1 ;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(NSArray *)contacts;
-(id)initWithContacts:(id)arg1 ;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(id)domain;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setContacts:(NSArray *)arg1 ;
-(long long)audioRoute;
-(void)setDomain:(id)arg1 ;
-(id)_spotlightContentType;
@end
