/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXBasicTileAnimationOptions : NSObject <NSCopying> {

	BOOL _shouldNotifyTiles;
	BOOL _shouldSnapshotDynamicContents;
	double _delay;
	double _duration;
	long long _style;
	unsigned long long _flags;

}

@property (assign,nonatomic) double delay;                                    //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long style;                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyTiles;                          //@synthesize shouldNotifyTiles=_shouldNotifyTiles - In the implementation block
@property (assign,nonatomic) BOOL shouldSnapshotDynamicContents;              //@synthesize shouldSnapshotDynamicContents=_shouldSnapshotDynamicContents - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                        //@synthesize flags=_flags - In the implementation block
+(id)defaultAnimationOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)flags;
-(void)setFlags:(unsigned long long)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(long long)style;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)init;
-(BOOL)shouldNotifyTiles;
-(void)setShouldNotifyTiles:(BOOL)arg1 ;
-(BOOL)shouldSnapshotDynamicContents;
-(void)setShouldSnapshotDynamicContents:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(id)description;
@end
