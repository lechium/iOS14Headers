/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:09 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying> {

	NSString* _text;
	long long _textAlignment;

}

@property (nonatomic,copy) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long textAlignment;              //@synthesize textAlignment=_textAlignment - In the implementation block
-(void)setTextAlignment:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)textAlignment;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

