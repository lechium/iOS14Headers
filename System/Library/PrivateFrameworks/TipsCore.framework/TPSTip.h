/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSDocument.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TPSActionableContent, TPSWidgetContent, NSArray, TPSAssets;

@interface TPSTip : TPSDocument <NSCopying, NSSecureCoding> {

	BOOL _siriSuggestion;
	long long _type;
	long long _subContentType;
	TPSActionableContent* _fullContent;
	TPSActionableContent* _miniContent;
	TPSWidgetContent* _widgetContent;
	NSArray* _collectionIdentifiers;

}

@property (assign,nonatomic) long long type;                                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long subContentType;                                     //@synthesize subContentType=_subContentType - In the implementation block
@property (nonatomic,copy) TPSActionableContent * fullContent;                             //@synthesize fullContent=_fullContent - In the implementation block
@property (nonatomic,copy) TPSActionableContent * miniContent;                             //@synthesize miniContent=_miniContent - In the implementation block
@property (nonatomic,copy) TPSWidgetContent * widgetContent;                               //@synthesize widgetContent=_widgetContent - In the implementation block
@property (nonatomic,copy) NSArray * collectionIdentifiers;                                //@synthesize collectionIdentifiers=_collectionIdentifiers - In the implementation block
@property (getter=isTip,nonatomic,readonly) BOOL tip; 
@property (getter=isIntro,nonatomic,readonly) BOOL intro; 
@property (getter=isOutro,nonatomic,readonly) BOOL outro; 
@property (assign,getter=isSiriSuggestion,nonatomic) BOOL siriSuggestion;                  //@synthesize siriSuggestion=_siriSuggestion - In the implementation block
@property (getter=isWelcome,nonatomic,readonly) BOOL welcome; 
@property (getter=isHardwareWelcome,nonatomic,readonly) BOOL hardwareWelcome; 
@property (getter=isSoftwareWelcome,nonatomic,readonly) BOOL softwareWelcome; 
@property (nonatomic,copy,readonly) TPSAssets * fullContentAssets; 
+(id)classSet;
+(BOOL)supportsSecureCoding;
+(void)getValuesFromOpenURLSchemeQueryItems:(id)arg1 tipIdentifier:(id*)arg2 collectionIdentifier:(id*)arg3 launchSource:(id*)arg4 ;
+(id)URLSchemeWithTipIdentifier:(id)arg1 collectionIdentifier:(id)arg2 launchSource:(id)arg3 ;
+(id)tipIdFromDictionary:(id)arg1 ;
+(long long)contentTypeForDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)bodyText;
-(BOOL)hasImage;
-(BOOL)isTip;
-(id)summary;
-(BOOL)hasVideo;
-(id)actions;
-(id)debugDescription;
-(id)title;
-(BOOL)isIntro;
-(id)shareText;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 ;
-(BOOL)isOutro;
-(void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2 ;
-(BOOL)isWelcome;
-(long long)type;
-(TPSActionableContent *)fullContent;
-(TPSAssets *)fullContentAssets;
-(id)bodyContent;
-(BOOL)containsLinks;
-(BOOL)textContainsHTML;
-(id)webURLPath;
-(TPSActionableContent *)miniContent;
-(BOOL)isSiriSuggestion;
-(void)setSiriSuggestion:(BOOL)arg1 ;
-(long long)subContentType;
-(void)setSubContentType:(long long)arg1 ;
-(void)setFullContent:(TPSActionableContent *)arg1 ;
-(void)setMiniContent:(TPSActionableContent *)arg1 ;
-(TPSWidgetContent *)widgetContent;
-(void)setWidgetContent:(TPSWidgetContent *)arg1 ;
-(void)setCollectionIdentifiers:(NSArray *)arg1 ;
-(BOOL)isHardwareWelcome;
-(BOOL)isSoftwareWelcome;
-(void)addCollectionIdentifier:(id)arg1 ;
-(BOOL)hasWidgetContent;
-(id)URLSchemeWithLaunchSource:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortTitle;
-(NSArray *)collectionIdentifiers;
@end

