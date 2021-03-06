/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REImage.h>

@class NSString;

@interface REFileImage : REImage {

	NSString* _path;
	double _scale;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) double scale;                      //@synthesize scale=_scale - In the implementation block
-(id)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(double)scale;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPath:(id)arg1 scale:(double)arg2 ;
-(unsigned long long)hash;
@end

