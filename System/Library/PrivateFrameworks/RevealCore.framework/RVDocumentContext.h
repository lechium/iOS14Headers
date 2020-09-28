/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RevealCore.framework/RevealCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSTimeZone, NSURL, NSArray;

@interface RVDocumentContext : NSObject <NSSecureCoding> {

	NSString* authorName;
	NSString* authorEmailAddress;
	NSString* authorContactUUID;
	NSDate* contentReferenceDate;
	NSTimeZone* contentReferenceTimeZone;
	NSString* contentSubject;
	NSString* selectedText;
	NSURL* documentURL;
	NSArray* existingDDResultsList;
	NSString* coreSpotlightUniqueIdentifier;

}

@property (nonatomic,copy) NSString * authorName; 
@property (nonatomic,copy) NSString * authorEmailAddress; 
@property (nonatomic,copy) NSString * authorContactUUID; 
@property (nonatomic,copy) NSDate * contentReferenceDate; 
@property (nonatomic,copy) NSTimeZone * contentReferenceTimeZone; 
@property (nonatomic,copy) NSString * contentSubject; 
@property (nonatomic,copy) NSString * selectedText; 
@property (nonatomic,copy) NSURL * documentURL; 
@property (nonatomic,copy) NSArray * existingDDResultsList; 
@property (nonatomic,copy) NSString * coreSpotlightUniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(NSString *)selectedText;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(void)setAuthorName:(NSString *)arg1 ;
-(NSURL *)documentURL;
-(NSString *)authorName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)coreSpotlightUniqueIdentifier;
-(void)setCoreSpotlightUniqueIdentifier:(NSString *)arg1 ;
-(NSDate *)contentReferenceDate;
-(NSTimeZone *)contentReferenceTimeZone;
-(NSString *)contentSubject;
-(NSString *)authorEmailAddress;
-(NSArray *)existingDDResultsList;
-(void)setNameAndEmailWithRawSenderField:(id)arg1 ;
-(void)setAuthorEmailAddress:(NSString *)arg1 ;
-(void)setAuthorContactUUID:(NSString *)arg1 ;
-(void)setContentReferenceDate:(NSDate *)arg1 ;
-(void)setContentReferenceTimeZone:(NSTimeZone *)arg1 ;
-(void)setContentSubject:(NSString *)arg1 ;
-(NSString *)authorContactUUID;
-(void)setExistingDDResultsList:(NSArray *)arg1 ;
@end
