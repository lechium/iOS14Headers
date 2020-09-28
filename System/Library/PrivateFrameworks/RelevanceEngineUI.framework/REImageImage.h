/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:07 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngine/REImage.h>

@class UIImage;

@interface REImageImage : REImage {

	UIImage* _uiImage;

}

@property (nonatomic,retain) UIImage * uiImage;              //@synthesize uiImage=_uiImage - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)uiImage;
-(id)image;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUiImage:(UIImage *)arg1 ;
@end
