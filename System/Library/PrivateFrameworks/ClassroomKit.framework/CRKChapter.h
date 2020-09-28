/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL, NSDictionary;

@interface CRKChapter : NSObject <NSSecureCoding> {

	NSString* _title;
	NSArray* _subchapters;
	NSURL* _webURL;

}

@property (nonatomic,copy) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * subchapters;                                   //@synthesize subchapters=_subchapters - In the implementation block
@property (nonatomic,retain) NSURL * webURL;                                        //@synthesize webURL=_webURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * JSONRepresentation; 
+(BOOL)supportsSecureCoding;
-(NSURL *)webURL;
-(void)setWebURL:(NSURL *)arg1 ;
-(NSDictionary *)JSONRepresentation;
-(NSString *)title;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSArray *)subchapters;
-(void)setSubchapters:(NSArray *)arg1 ;
@end
