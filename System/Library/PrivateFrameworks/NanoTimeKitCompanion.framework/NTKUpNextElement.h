/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class REElement, NSString;

@interface NTKUpNextElement : NSObject {

	REElement* _element;
	NSString* _elementIdentifier;

}

@property (nonatomic,readonly) NSString * elementIdentifier;              //@synthesize elementIdentifier=_elementIdentifier - In the implementation block
@property (nonatomic,retain) REElement * element;                         //@synthesize element=_element - In the implementation block
+(id)elementWithREElement:(id)arg1 ;
-(NSString *)elementIdentifier;
-(REElement *)element;
-(void)setElement:(REElement *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithREElement:(id)arg1 ;
@end
