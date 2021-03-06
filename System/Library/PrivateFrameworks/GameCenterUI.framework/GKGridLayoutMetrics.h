/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface GKGridLayoutMetrics : NSObject <NSCopying> {

	NSMutableDictionary* _keyToMetrics;
	NSMutableDictionary* _locationToKeyList;
	NSString* _layoutKey;

}

@property (nonatomic,retain) NSMutableDictionary * keyToMetrics;                   //@synthesize keyToMetrics=_keyToMetrics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locationToKeyList;              //@synthesize locationToKeyList=_locationToKeyList - In the implementation block
@property (nonatomic,retain) NSString * layoutKey;                                 //@synthesize layoutKey=_layoutKey - In the implementation block
+(id)metrics;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)prepareLayout:(id)arg1 startingAtSection:(long long)arg2 ;
-(void)dealloc;
-(id)init;
-(void)insertSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3 ;
-(void)addSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(id)localDescription;
-(id)supplementaryMetricsForKey:(id)arg1 ;
-(void)configureCollectionView:(id)arg1 ;
-(NSMutableDictionary *)locationToKeyList;
-(NSMutableDictionary *)keyToMetrics;
-(void)setLayoutKey:(NSString *)arg1 ;
-(void)enumerateSupplementaryLocations:(/*^block*/id)arg1 ;
-(id)keyListForLocation:(unsigned long long)arg1 ;
-(void)replaceSupplementaryMetrics:(id)arg1 forKey:(id)arg2 ;
-(NSString *)layoutKey;
-(void)enumerateSupplementaryMetricsUsingBlock:(/*^block*/id)arg1 ;
-(id)_gkDescription;
-(id)listForLocation:(unsigned long long)arg1 ;
-(void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg1 atLocation:(unsigned long long)arg2 globalRange:(NSRange)arg3 ;
-(void)removeSupplementaryMetricsForKey:(id)arg1 ;
-(void)setKeyToMetrics:(NSMutableDictionary *)arg1 ;
-(void)setLocationToKeyList:(NSMutableDictionary *)arg1 ;
-(id)description;
@end

