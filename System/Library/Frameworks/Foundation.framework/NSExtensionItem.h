/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSAttributedString, NSArray, NSDictionary;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _userInfo;

}

@property (nonatomic,copy) NSAttributedString * attributedTitle; 
@property (nonatomic,copy) NSAttributedString * attributedContentText; 
@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSDictionary * userInfo; 
+(BOOL)supportsSecureCoding;
-(NSAttributedString *)attributedTitle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_matchingDictionaryRepresentation;
-(void)dealloc;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setAttributedContentText:(NSAttributedString *)arg1 ;
-(id)init;
-(NSAttributedString *)attributedContentText;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)attachments;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
