/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSURL, TPSDocument;

@interface TPSNotificationCache : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSString* _collectionIdentifier;
	NSDictionary* _extensionPayload;
	NSURL* _attachmentURL;
	TPSDocument* _document;
	NSString* _locale;

}

@property (nonatomic,retain) NSString * locale;                            //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * collectionIdentifier;              //@synthesize collectionIdentifier=_collectionIdentifier - In the implementation block
@property (nonatomic,retain) TPSDocument * document;                       //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSDictionary * extensionPayload;              //@synthesize extensionPayload=_extensionPayload - In the implementation block
@property (nonatomic,retain) NSURL * attachmentURL;                        //@synthesize attachmentURL=_attachmentURL - In the implementation block
+(id)classSet;
+(BOOL)supportsSecureCoding;
+(id)notificationCacheWithCollectionIdentifier:(id)arg1 document:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setCollectionIdentifier:(NSString *)arg1 ;
-(NSString *)collectionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocale:(NSString *)arg1 ;
-(id)debugDescription;
-(NSString *)locale;
-(NSURL *)attachmentURL;
-(void)setAttachmentURL:(NSURL *)arg1 ;
-(unsigned long long)type;
-(void)setExtensionPayload:(NSDictionary *)arg1 ;
-(NSDictionary *)extensionPayload;
-(BOOL)hasLocaleChanged;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(TPSDocument *)document;
-(void)setDocument:(TPSDocument *)arg1 ;
-(id)initWithCollectionIdentifier:(id)arg1 document:(id)arg2 type:(unsigned long long)arg3 ;
@end

