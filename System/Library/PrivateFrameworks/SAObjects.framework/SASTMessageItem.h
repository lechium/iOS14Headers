/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class NSURL, NSString, SAUIDecoratedText;

@interface SASTMessageItem : AceObject <SASTTemplateItem>

@property (nonatomic,copy) NSURL * audioMessageURL; 
@property (nonatomic,copy) NSString * bundleId; 
@property (nonatomic,retain) SAUIDecoratedText * content; 
@property (nonatomic,retain) SAUIDecoratedText * recipient; 
@property (nonatomic,copy) NSString * serviceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageItem;
+(id)messageItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIDecoratedText *)recipient;
-(id)encodedClassName;
-(id)groupIdentifier;
-(void)setServiceType:(NSString *)arg1 ;
-(void)setBundleId:(NSString *)arg1 ;
-(SAUIDecoratedText *)content;
-(void)setContent:(SAUIDecoratedText *)arg1 ;
-(void)setAudioMessageURL:(NSURL *)arg1 ;
-(NSURL *)audioMessageURL;
-(void)setRecipient:(SAUIDecoratedText *)arg1 ;
-(NSString *)bundleId;
-(NSString *)serviceType;
@end
