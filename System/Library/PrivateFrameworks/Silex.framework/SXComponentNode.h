/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableSet;

@interface SXComponentNode : NSObject {

	NSString* _componentIdentifier;
	long long _attribute;
	NSMutableSet* _mutableDependencies;
	NSMutableSet* _toPositionDependencies;
	NSMutableSet* _toSizeDependencies;

}

@property (nonatomic,retain) NSMutableSet * mutableDependencies;                   //@synthesize mutableDependencies=_mutableDependencies - In the implementation block
@property (nonatomic,readonly) NSMutableSet * toPositionDependencies;              //@synthesize toPositionDependencies=_toPositionDependencies - In the implementation block
@property (nonatomic,readonly) NSMutableSet * toSizeDependencies;                  //@synthesize toSizeDependencies=_toSizeDependencies - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithComponentIdentifier:(id)arg1 andAttribute:(long long)arg2 ;
-(NSMutableSet *)mutableDependencies;
-(void)setMutableDependencies:(NSMutableSet *)arg1 ;
-(NSMutableSet *)toPositionDependencies;
-(NSMutableSet *)toSizeDependencies;
@end
