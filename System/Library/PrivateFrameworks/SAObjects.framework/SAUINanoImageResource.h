/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIImageResource.h>

@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource : SAUIImageResource

@property (assign,nonatomic) BOOL backgroundNeeded; 
@property (nonatomic,copy) NSString * imageDownloadType; 
@property (nonatomic,retain) SAUIDecoratedText * monogram; 
@property (nonatomic,copy) NSString * placeholderImage; 
+(id)nanoImageResource;
+(id)nanoImageResourceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(BOOL)backgroundNeeded;
-(void)setBackgroundNeeded:(BOOL)arg1 ;
-(NSString *)imageDownloadType;
-(void)setImageDownloadType:(NSString *)arg1 ;
-(void)setMonogram:(SAUIDecoratedText *)arg1 ;
-(NSString *)placeholderImage;
-(SAUIDecoratedText *)monogram;
-(void)setPlaceholderImage:(NSString *)arg1 ;
@end
