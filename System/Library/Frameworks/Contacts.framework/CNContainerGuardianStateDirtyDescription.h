/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContainerPropertyDescription.h>

@interface CNContainerGuardianStateDirtyDescription : CNContainerPropertyDescription
-(id)key;
-(id)CNValueFromABValue:(void*)arg1 ;
-(Class)valueClass;
-(id)CNValueForContainer:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContainer:(id)arg2 ;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(int)abPropertyID;
-(BOOL)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(_CFError*)arg3 ;
-(BOOL)isWritable;
@end

