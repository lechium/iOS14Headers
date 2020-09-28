/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/SPComplicationData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SPStockListComplicationData : SPComplicationData <NSSecureCoding> {

	NSArray* _stockList;

}

@property (nonatomic,retain) NSArray * stockList;              //@synthesize stockList=_stockList - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)stockList;
-(void)setStockList:(NSArray *)arg1 ;
@end
