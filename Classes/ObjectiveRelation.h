// ObjectiveRelation.h
//
// Copyright (c) 2014 Marin Usalj <http://mneorr.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

@interface ObjectiveRelation : NSObject <NSFastEnumeration>

@property (readonly) NSArray *fetchedObjects;

+ (instancetype)relationWithEntity:(Class)entity;

- (void)deleteAll;

- (id)create;
- (id)create:(NSDictionary *)attributes;

- (id)all;
- (id)where:(id)condition, ...;
- (id)where:(id)condition arguments:(va_list)arguments;
- (id)order:(id)condition;
- (id)reverseOrder;
- (id)limit:(NSUInteger)limit;
- (id)offset:(NSUInteger)offset;
- (id)inContext:(NSManagedObjectContext *)context;

- (id)findOrCreate:(NSDictionary *)properties;
- (id)find:(id)condition, ...;

- (id)first;
- (id)last;
- (NSUInteger)count;

@end
