/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNCache, NSArray, NSDictionary;

@interface CNContactHandleStringIndexer : NSObject {

	CNCache* _indexImpl;
	NSArray* _targetHandleStrings;

}

@property (nonatomic,readonly) CNCache * indexImpl;                        //@synthesize indexImpl=_indexImpl - In the implementation block
@property (nonatomic,readonly) NSArray * targetHandleStrings;              //@synthesize targetHandleStrings=_targetHandleStrings - In the implementation block
@property (nonatomic,readonly) NSDictionary * index; 
+(id)indexByMatchingIndexWithRawHandles:(id)arg1 toTargetHandleStrings:(id)arg2 ;
-(NSDictionary *)index;
-(id)init;
-(CNCache *)indexImpl;
-(void)indexContact:(id)arg1 ;
-(id)initWithTargetHandleStrings:(id)arg1 ;
-(id)indexWithRawHandles;
-(void)indexEmailAddressesOnContact:(id)arg1 ;
-(void)indexPhoneNumbersOnContact:(id)arg1 ;
-(void)indexContacts:(id)arg1 ;
-(NSArray *)targetHandleStrings;
-(id)description;
@end
