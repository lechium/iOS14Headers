/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSDate;

@interface PDComment : NSObject {

	CGPoint mPosition;
	NSString* mText;
	unsigned long long mAuthorId;
	NSDate* mDate;
	unsigned mIndex;
	PDComment* parent;
	NSString* _author;

}

@property (nonatomic,retain) NSString * author;              //@synthesize author=_author - In the implementation block
@property (retain) PDComment * parent; 
-(void)setIndex:(unsigned)arg1 ;
-(void)setParent:(PDComment *)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setDate:(id)arg1 ;
-(NSString *)author;
-(id)date;
-(unsigned)index;
-(PDComment *)parent;
-(id)text;
-(CGPoint)position;
-(void)setText:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setAuthorId:(unsigned long long)arg1 ;
-(unsigned long long)authorId;
@end

