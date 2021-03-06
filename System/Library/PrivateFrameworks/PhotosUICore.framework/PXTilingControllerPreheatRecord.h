/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:02 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXTilingControllerPreheatHandler;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSIndexSet;

@interface PXTilingControllerPreheatRecord : NSObject {

	id<PXTilingControllerPreheatHandler> _preheatHandler;
	void* _context;
	unsigned long long _tileGroup;
	NSIndexSet* _preheatedTileIndexes;
	UIEdgeInsets _padding;

}

@property (nonatomic,__weak,readonly) id<PXTilingControllerPreheatHandler> preheatHandler;              //@synthesize preheatHandler=_preheatHandler - In the implementation block
@property (nonatomic,readonly) void* context;                                                           //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) unsigned long long tileGroup;                                              //@synthesize tileGroup=_tileGroup - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                      //@synthesize padding=_padding - In the implementation block
@property (nonatomic,retain) NSIndexSet * preheatedTileIndexes;                                         //@synthesize preheatedTileIndexes=_preheatedTileIndexes - In the implementation block
-(unsigned long long)tileGroup;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPreheatedTileIndexes:(NSIndexSet *)arg1 ;
-(NSIndexSet *)preheatedTileIndexes;
-(id<PXTilingControllerPreheatHandler>)preheatHandler;
-(id)initWithPreheatHandler:(id)arg1 context:(void*)arg2 ;
-(void)setTileGroup:(unsigned long long)arg1 ;
-(void*)context;
@end

