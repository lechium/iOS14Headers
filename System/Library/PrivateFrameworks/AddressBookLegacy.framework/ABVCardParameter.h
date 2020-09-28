/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface ABVCardParameter : NSObject {

	NSString* _name;
	NSString* _grouping;
	id _value;
	NSMutableArray* _types;
	BOOL _primary;

}
-(id)types;
-(id)grouping;
-(id)initWithName:(id)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)dealloc;
-(void)setGrouping:(id)arg1 ;
-(void)addType:(id)arg1 ;
-(void)addTypes:(id)arg1 ;
-(BOOL)isPrimary;
-(id)value;
-(id)name;
-(id)description;
@end
