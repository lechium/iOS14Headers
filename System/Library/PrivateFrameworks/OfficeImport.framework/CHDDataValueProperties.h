/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class CHDDataLabel, CHDMarker, OADGraphicProperties, NSString;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {

	CHDDataLabel* mDataLabel;
	CHDMarker* mMarker;
	unsigned long long mDataValueIndex;
	OADGraphicProperties* mGraphicProperties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataValueProperties;
-(long long)key;
-(id)marker;
-(id)init;
-(NSString *)description;
-(id)graphicProperties;
-(void)setDataValueIndex:(unsigned long long)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setMarker:(id)arg1 ;
-(void)setDataLabel:(id)arg1 ;
-(id)shallowCopyWithIndex:(unsigned long long)arg1 ;
-(id)dataLabel;
-(unsigned long long)dataValueIndex;
@end
