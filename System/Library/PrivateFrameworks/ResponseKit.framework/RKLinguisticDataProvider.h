/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RKPolarityDataProvider.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider> {

	NSMutableDictionary* _polarityMapsByLanguageID;

}

@property (retain) NSMutableDictionary * polarityMapsByLanguageID;              //@synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID - In the implementation block
-(id)init;
-(NSMutableDictionary *)polarityMapsByLanguageID;
-(void)setPolarityMapsByLanguageID:(NSMutableDictionary *)arg1 ;
@end

