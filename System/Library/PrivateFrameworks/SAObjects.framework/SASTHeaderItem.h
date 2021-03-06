/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateItem.h>

@class SAUIDecoratedText, NSString;

@interface SASTHeaderItem : AceObject <SASTTemplateItem>

@property (nonatomic,retain) SAUIDecoratedText * header; 
@property (nonatomic,retain) SAUIDecoratedText * subtitle; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headerItemWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)headerItem;
-(SAUIDecoratedText *)subtitle;
-(id)encodedClassName;
-(void)setSubtitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)header;
-(id)groupIdentifier;
-(void)setHeader:(SAUIDecoratedText *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

