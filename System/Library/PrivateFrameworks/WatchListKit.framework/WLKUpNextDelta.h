/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSDate, NSArray;

@interface WLKUpNextDelta : NSObject <NSSecureCoding> {

	NSDictionary* _backingDictionary;
	NSDate* _timestamp;
	NSDate* _expirationDate;
	NSArray* _items;

}

@property (nonatomic,readonly) NSDate * timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                  //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSArray * additions; 
@property (nonatomic,copy,readonly) NSArray * removals; 
+(BOOL)supportsSecureCoding;
-(NSArray *)items;
-(NSArray *)additions;
-(NSDate *)expirationDate;
-(NSDate *)timestamp;
-(BOOL)isExpired;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)removals;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)deltaByMergingItemsFromDelta:(id)arg1 ;
@end
