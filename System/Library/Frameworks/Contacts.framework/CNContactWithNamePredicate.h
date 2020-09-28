/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPredicate.h>
#import <libobjc.A.dylib/CNMAIDPredicate.h>
#import <libobjc.A.dylib/CNSuggestedContactPredicate.h>

@class NSString;

@interface CNContactWithNamePredicate : CNPredicate <CNMAIDPredicate, CNSuggestedContactPredicate> {

	NSString* _name;
	unsigned long long _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)doesPerson:(id)arg1 matchName:(id)arg2 ;
+(id)descriptionForOptions:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)sgContactMatchesWithSortOrder:(long long)arg1 mutableObjects:(BOOL)arg2 service:(id)arg3 error:(id*)arg4 ;
-(id)contactsFromCLSDataStore:(id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)options;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(NSString *)description;
@end
