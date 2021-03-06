/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:47 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextureIO/TXRAssetCatalogFileAttributes.h>

@interface TXRAssetCatalogMipFileAttributes : TXRAssetCatalogFileAttributes {

	unsigned long long _level;
	unsigned long long _face;

}

@property (assign,nonatomic) unsigned long long level;              //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) unsigned long long face; 
-(unsigned long long)level;
-(unsigned long long)face;
-(id)init;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setFace:(unsigned long long)arg1 ;
-(void)specifyAllFaces;
-(BOOL)doesSpecifyAllFaces;
@end

