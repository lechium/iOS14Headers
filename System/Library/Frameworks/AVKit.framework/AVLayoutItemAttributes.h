/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AVLayoutItemAttributes : NSObject <NSCopying> {

	BOOL _hasFlexibleContentSize;
	BOOL _prefersSecondaryMaterialOverlay;
	BOOL _collapsed;
	BOOL _included;
	unsigned long long _displayPriority;
	AVLayoutItemAttributes* _displayPartnerAttributes;
	double _trailingInterItemSpace;
	NSString* _accessibilityIdentifier;
	AVLayoutItemAttributes* _nextAttributesInLayoutOrder;
	AVLayoutItemAttributes* _nextAttributesInPriorityOrder;
	NSString* _uniqueIdentifier;
	CGSize _minimumSize;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                                                  //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long displayPriority;                                         //@synthesize displayPriority=_displayPriority - In the implementation block
@property (__weak) AVLayoutItemAttributes * displayPartnerAttributes;                                    //@synthesize displayPartnerAttributes=_displayPartnerAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasFlexibleContentSize;                                                //@synthesize hasFlexibleContentSize=_hasFlexibleContentSize - In the implementation block
@property (assign,nonatomic) BOOL prefersSecondaryMaterialOverlay;                                       //@synthesize prefersSecondaryMaterialOverlay=_prefersSecondaryMaterialOverlay - In the implementation block
@property (assign,nonatomic) CGSize minimumSize;                                                         //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                          //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                            //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded; 
@property (assign,nonatomic) double trailingInterItemSpace;                                              //@synthesize trailingInterItemSpace=_trailingInterItemSpace - In the implementation block
@property (nonatomic,copy) NSString * accessibilityIdentifier;                                           //@synthesize accessibilityIdentifier=_accessibilityIdentifier - In the implementation block
@property (nonatomic,retain) AVLayoutItemAttributes * nextAttributesInLayoutOrder;                       //@synthesize nextAttributesInLayoutOrder=_nextAttributesInLayoutOrder - In the implementation block
@property (assign,nonatomic,__weak) AVLayoutItemAttributes * nextAttributesInPriorityOrder;              //@synthesize nextAttributesInPriorityOrder=_nextAttributesInPriorityOrder - In the implementation block
-(CGSize)minimumSize;
-(BOOL)isCollapsed;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDisplayPriority:(unsigned long long)arg1 ;
-(id)debugDescription;
-(BOOL)isIncluded;
-(id)init;
-(NSString *)uniqueIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIncluded:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(void)setMinimumSize:(CGSize)arg1 ;
-(unsigned long long)displayPriority;
-(unsigned long long)hash;
-(NSString *)accessibilityIdentifier;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(AVLayoutItemAttributes *)displayPartnerAttributes;
-(void)setDisplayPartnerAttributes:(AVLayoutItemAttributes *)arg1 ;
-(BOOL)hasFlexibleContentSize;
-(void)setHasFlexibleContentSize:(BOOL)arg1 ;
-(BOOL)prefersSecondaryMaterialOverlay;
-(void)setPrefersSecondaryMaterialOverlay:(BOOL)arg1 ;
-(double)trailingInterItemSpace;
-(void)setTrailingInterItemSpace:(double)arg1 ;
-(AVLayoutItemAttributes *)nextAttributesInLayoutOrder;
-(void)setNextAttributesInLayoutOrder:(AVLayoutItemAttributes *)arg1 ;
-(AVLayoutItemAttributes *)nextAttributesInPriorityOrder;
-(void)setNextAttributesInPriorityOrder:(AVLayoutItemAttributes *)arg1 ;
@end

