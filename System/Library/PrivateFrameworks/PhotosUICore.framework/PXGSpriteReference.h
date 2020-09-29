/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:08 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXGSpriteIndexReferencing.h>

@class PXGLayout, NSString;

@interface PXGSpriteReference : NSObject <PXGSpriteIndexReferencing> {

	BOOL _isDynamic;
	unsigned _spriteIndex;
	long long _layoutVersion;
	PXGLayout* _layout;
	id _objectReference;

}

@property (assign,nonatomic) unsigned spriteIndex;                   //@synthesize spriteIndex=_spriteIndex - In the implementation block
@property (assign,nonatomic) long long layoutVersion;                //@synthesize layoutVersion=_layoutVersion - In the implementation block
@property (assign,nonatomic,__weak) PXGLayout * layout;              //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic) BOOL isDynamic;                         //@synthesize isDynamic=_isDynamic - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,retain) id objectReference;                     //@synthesize objectReference=_objectReference - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectReference; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLayout:(PXGLayout *)arg1 ;
-(void)setSpriteIndex:(unsigned)arg1 ;
-(void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2 ;
-(BOOL)isDynamic;
-(void)setLayoutVersion:(long long)arg1 ;
-(long long)layoutVersion;
-(unsigned)spriteIndex;
-(id)_init;
-(id)init;
-(PXGLayout *)layout;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObjectReference:(id)arg1 ;
-(void)setIsDynamic:(BOOL)arg1 ;
-(BOOL)hasObjectReference;
-(BOOL)isValid;
-(unsigned long long)hash;
-(id)objectReference;
-(NSString *)description;
@end
