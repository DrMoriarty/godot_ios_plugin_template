
#ifndef TYPED_METHOD_BIND
    
class MethodBind0 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)() ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		
#endif
		(instance->*method)();
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)()  ;
	}
#endif
	MethodBind0 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif
		


	};
};

template<class T   >
MethodBind* create_method_bind( void (T::*p_method)()  ) {

	MethodBind0       * a = memnew( (MethodBind0     ) );
	union {

		 void (T::*sm)() ;
		 void (__UnexistingClass::*dm)() ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T   >
class MethodBind0 : public MethodBind {
public:

	 void (T::*method)() ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		
#endif
		(instance->*method)();
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)()  ;
	}
#endif
	MethodBind0 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif

		
	};
};

template<class T   >
MethodBind* create_method_bind( void (T::*p_method)()  ) {

	MethodBind0<T   > * a = memnew( (MethodBind0<T   >) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R   >
class MethodBind0R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)() ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		
#endif
		Variant ret = (instance->*method)();
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)() ,r_ret)  ;
	}
#endif
	MethodBind0R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R  >
MethodBind* create_method_bind(R  (T::*p_method)()  ) {

	MethodBind0R <  R   > * a = memnew( (MethodBind0R < R   >) );
	union {

		R  (T::*sm)() ;
		R  (__UnexistingClass::*dm)() ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R  >
class MethodBind0R : public MethodBind {
public:

	R  (T::*method)() ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		
#endif
		Variant ret = (instance->*method)();
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)() ,r_ret) ;
	}
#endif
	MethodBind0R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R  >
MethodBind* create_method_bind(R  (T::*p_method)()  ) {

	MethodBind0R<T ,R  > * a = memnew( (MethodBind0R<T ,R  >) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
    
class MethodBind0C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)() const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		
#endif
		(instance->*method)();
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)()  ;
	}
#endif
	MethodBind0C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif
		


	};
};

template<class T   >
MethodBind* create_method_bind( void (T::*p_method)() const ) {

	MethodBind0C       * a = memnew( (MethodBind0C     ) );
	union {

		 void (T::*sm)() const;
		 void (__UnexistingClass::*dm)() const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T   >
class MethodBind0C : public MethodBind {
public:

	 void (T::*method)() const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		
#endif
		(instance->*method)();
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)()  ;
	}
#endif
	MethodBind0C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif

		
	};
};

template<class T   >
MethodBind* create_method_bind( void (T::*p_method)() const ) {

	MethodBind0C<T   > * a = memnew( (MethodBind0C<T   >) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R   >
class MethodBind0RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)() const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		
#endif
		Variant ret = (instance->*method)();
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)() ,r_ret)  ;
	}
#endif
	MethodBind0RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R  >
MethodBind* create_method_bind(R  (T::*p_method)() const ) {

	MethodBind0RC <  R   > * a = memnew( (MethodBind0RC < R   >) );
	union {

		R  (T::*sm)() const;
		R  (__UnexistingClass::*dm)() const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R  >
class MethodBind0RC : public MethodBind {
public:

	R  (T::*method)() const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		
#endif
		Variant ret = (instance->*method)();
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)() ,r_ret) ;
	}
#endif
	MethodBind0RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(0);
#else
		set_argument_count(0);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R  >
MethodBind* create_method_bind(R  (T::*p_method)() const ) {

	MethodBind0RC<T ,R  > * a = memnew( (MethodBind0RC<T ,R  >) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1 >
class MethodBind1 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		
#endif
		(instance->*method)(_VC(1));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]))  ;
	}
#endif
	MethodBind1 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif
		


	};
};

template<class T  , class P1>
MethodBind* create_method_bind( void (T::*p_method)(P1)  ) {

	MethodBind1 <    P1 > * a = memnew( (MethodBind1 <   P1 >) );
	union {

		 void (T::*sm)(P1) ;
		 void (__UnexistingClass::*dm)(P1) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1>
class MethodBind1 : public MethodBind {
public:

	 void (T::*method)(P1) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		
#endif
		(instance->*method)(_VC(1));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]))  ;
	}
#endif
	MethodBind1 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif

		
	};
};

template<class T  , class P1>
MethodBind* create_method_bind( void (T::*p_method)(P1)  ) {

	MethodBind1<T  , P1> * a = memnew( (MethodBind1<T  , P1>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1 >
class MethodBind1R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		
#endif
		Variant ret = (instance->*method)(_VC(1));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1])) ,r_ret)  ;
	}
#endif
	MethodBind1R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1>
MethodBind* create_method_bind(R  (T::*p_method)(P1)  ) {

	MethodBind1R <  R , P1 > * a = memnew( (MethodBind1R < R , P1 >) );
	union {

		R  (T::*sm)(P1) ;
		R  (__UnexistingClass::*dm)(P1) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1>
class MethodBind1R : public MethodBind {
public:

	R  (T::*method)(P1) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		
#endif
		Variant ret = (instance->*method)(_VC(1));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1])) ,r_ret) ;
	}
#endif
	MethodBind1R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1>
MethodBind* create_method_bind(R  (T::*p_method)(P1)  ) {

	MethodBind1R<T ,R , P1> * a = memnew( (MethodBind1R<T ,R , P1>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1 >
class MethodBind1C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		
#endif
		(instance->*method)(_VC(1));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]))  ;
	}
#endif
	MethodBind1C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif
		


	};
};

template<class T  , class P1>
MethodBind* create_method_bind( void (T::*p_method)(P1) const ) {

	MethodBind1C <    P1 > * a = memnew( (MethodBind1C <   P1 >) );
	union {

		 void (T::*sm)(P1) const;
		 void (__UnexistingClass::*dm)(P1) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1>
class MethodBind1C : public MethodBind {
public:

	 void (T::*method)(P1) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		
#endif
		(instance->*method)(_VC(1));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]))  ;
	}
#endif
	MethodBind1C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif

		
	};
};

template<class T  , class P1>
MethodBind* create_method_bind( void (T::*p_method)(P1) const ) {

	MethodBind1C<T  , P1> * a = memnew( (MethodBind1C<T  , P1>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1 >
class MethodBind1RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		
#endif
		Variant ret = (instance->*method)(_VC(1));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1])) ,r_ret)  ;
	}
#endif
	MethodBind1RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1>
MethodBind* create_method_bind(R  (T::*p_method)(P1) const ) {

	MethodBind1RC <  R , P1 > * a = memnew( (MethodBind1RC < R , P1 >) );
	union {

		R  (T::*sm)(P1) const;
		R  (__UnexistingClass::*dm)(P1) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1>
class MethodBind1RC : public MethodBind {
public:

	R  (T::*method)(P1) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		
#endif
		Variant ret = (instance->*method)(_VC(1));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1])) ,r_ret) ;
	}
#endif
	MethodBind1RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(1);
#else
		set_argument_count(1);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1>
MethodBind* create_method_bind(R  (T::*p_method)(P1) const ) {

	MethodBind1RC<T ,R , P1> * a = memnew( (MethodBind1RC<T ,R , P1>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2 >
class MethodBind2 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		(instance->*method)(_VC(1), _VC(2));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]))  ;
	}
#endif
	MethodBind2 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif
		


	};
};

template<class T  , class P1, class P2>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2)  ) {

	MethodBind2 <    P1, P2 > * a = memnew( (MethodBind2 <   P1, P2 >) );
	union {

		 void (T::*sm)(P1, P2) ;
		 void (__UnexistingClass::*dm)(P1, P2) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2>
class MethodBind2 : public MethodBind {
public:

	 void (T::*method)(P1, P2) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		(instance->*method)(_VC(1), _VC(2));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]))  ;
	}
#endif
	MethodBind2 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif

		
	};
};

template<class T  , class P1, class P2>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2)  ) {

	MethodBind2<T  , P1, P2> * a = memnew( (MethodBind2<T  , P1, P2>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2 >
class MethodBind2R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1])) ,r_ret)  ;
	}
#endif
	MethodBind2R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2)  ) {

	MethodBind2R <  R , P1, P2 > * a = memnew( (MethodBind2R < R , P1, P2 >) );
	union {

		R  (T::*sm)(P1, P2) ;
		R  (__UnexistingClass::*dm)(P1, P2) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2>
class MethodBind2R : public MethodBind {
public:

	R  (T::*method)(P1, P2) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1])) ,r_ret) ;
	}
#endif
	MethodBind2R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2)  ) {

	MethodBind2R<T ,R , P1, P2> * a = memnew( (MethodBind2R<T ,R , P1, P2>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2 >
class MethodBind2C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		(instance->*method)(_VC(1), _VC(2));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]))  ;
	}
#endif
	MethodBind2C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif
		


	};
};

template<class T  , class P1, class P2>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2) const ) {

	MethodBind2C <    P1, P2 > * a = memnew( (MethodBind2C <   P1, P2 >) );
	union {

		 void (T::*sm)(P1, P2) const;
		 void (__UnexistingClass::*dm)(P1, P2) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2>
class MethodBind2C : public MethodBind {
public:

	 void (T::*method)(P1, P2) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		(instance->*method)(_VC(1), _VC(2));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]))  ;
	}
#endif
	MethodBind2C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif

		
	};
};

template<class T  , class P1, class P2>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2) const ) {

	MethodBind2C<T  , P1, P2> * a = memnew( (MethodBind2C<T  , P1, P2>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2 >
class MethodBind2RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1])) ,r_ret)  ;
	}
#endif
	MethodBind2RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2) const ) {

	MethodBind2RC <  R , P1, P2 > * a = memnew( (MethodBind2RC < R , P1, P2 >) );
	union {

		R  (T::*sm)(P1, P2) const;
		R  (__UnexistingClass::*dm)(P1, P2) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2>
class MethodBind2RC : public MethodBind {
public:

	R  (T::*method)(P1, P2) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1])) ,r_ret) ;
	}
#endif
	MethodBind2RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(2);
#else
		set_argument_count(2);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2) const ) {

	MethodBind2RC<T ,R , P1, P2> * a = memnew( (MethodBind2RC<T ,R , P1, P2>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3 >
class MethodBind3 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]))  ;
	}
#endif
	MethodBind3 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3)  ) {

	MethodBind3 <    P1, P2, P3 > * a = memnew( (MethodBind3 <   P1, P2, P3 >) );
	union {

		 void (T::*sm)(P1, P2, P3) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3>
class MethodBind3 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]))  ;
	}
#endif
	MethodBind3 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3)  ) {

	MethodBind3<T  , P1, P2, P3> * a = memnew( (MethodBind3<T  , P1, P2, P3>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3 >
class MethodBind3R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1])) ,r_ret)  ;
	}
#endif
	MethodBind3R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3)  ) {

	MethodBind3R <  R , P1, P2, P3 > * a = memnew( (MethodBind3R < R , P1, P2, P3 >) );
	union {

		R  (T::*sm)(P1, P2, P3) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3>
class MethodBind3R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1])) ,r_ret) ;
	}
#endif
	MethodBind3R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3)  ) {

	MethodBind3R<T ,R , P1, P2, P3> * a = memnew( (MethodBind3R<T ,R , P1, P2, P3>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3 >
class MethodBind3C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]))  ;
	}
#endif
	MethodBind3C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3) const ) {

	MethodBind3C <    P1, P2, P3 > * a = memnew( (MethodBind3C <   P1, P2, P3 >) );
	union {

		 void (T::*sm)(P1, P2, P3) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3>
class MethodBind3C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]))  ;
	}
#endif
	MethodBind3C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3) const ) {

	MethodBind3C<T  , P1, P2, P3> * a = memnew( (MethodBind3C<T  , P1, P2, P3>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3 >
class MethodBind3RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1])) ,r_ret)  ;
	}
#endif
	MethodBind3RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3) const ) {

	MethodBind3RC <  R , P1, P2, P3 > * a = memnew( (MethodBind3RC < R , P1, P2, P3 >) );
	union {

		R  (T::*sm)(P1, P2, P3) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3>
class MethodBind3RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1])) ,r_ret) ;
	}
#endif
	MethodBind3RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(3);
#else
		set_argument_count(3);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3) const ) {

	MethodBind3RC<T ,R , P1, P2, P3> * a = memnew( (MethodBind3RC<T ,R , P1, P2, P3>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4 >
class MethodBind4 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]))  ;
	}
#endif
	MethodBind4 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4)  ) {

	MethodBind4 <    P1, P2, P3, P4 > * a = memnew( (MethodBind4 <   P1, P2, P3, P4 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4>
class MethodBind4 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]))  ;
	}
#endif
	MethodBind4 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4)  ) {

	MethodBind4<T  , P1, P2, P3, P4> * a = memnew( (MethodBind4<T  , P1, P2, P3, P4>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4 >
class MethodBind4R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1])) ,r_ret)  ;
	}
#endif
	MethodBind4R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4)  ) {

	MethodBind4R <  R , P1, P2, P3, P4 > * a = memnew( (MethodBind4R < R , P1, P2, P3, P4 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4>
class MethodBind4R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1])) ,r_ret) ;
	}
#endif
	MethodBind4R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4)  ) {

	MethodBind4R<T ,R , P1, P2, P3, P4> * a = memnew( (MethodBind4R<T ,R , P1, P2, P3, P4>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4 >
class MethodBind4C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]))  ;
	}
#endif
	MethodBind4C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4) const ) {

	MethodBind4C <    P1, P2, P3, P4 > * a = memnew( (MethodBind4C <   P1, P2, P3, P4 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4>
class MethodBind4C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]))  ;
	}
#endif
	MethodBind4C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4) const ) {

	MethodBind4C<T  , P1, P2, P3, P4> * a = memnew( (MethodBind4C<T  , P1, P2, P3, P4>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4 >
class MethodBind4RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1])) ,r_ret)  ;
	}
#endif
	MethodBind4RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4) const ) {

	MethodBind4RC <  R , P1, P2, P3, P4 > * a = memnew( (MethodBind4RC < R , P1, P2, P3, P4 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4>
class MethodBind4RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1])) ,r_ret) ;
	}
#endif
	MethodBind4RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(4);
#else
		set_argument_count(4);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4) const ) {

	MethodBind4RC<T ,R , P1, P2, P3, P4> * a = memnew( (MethodBind4RC<T ,R , P1, P2, P3, P4>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5 >
class MethodBind5 : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]))  ;
	}
#endif
	MethodBind5 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5)  ) {

	MethodBind5 <    P1, P2, P3, P4, P5 > * a = memnew( (MethodBind5 <   P1, P2, P3, P4, P5 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5) ;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5>
class MethodBind5 : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]))  ;
	}
#endif
	MethodBind5 () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5)  ) {

	MethodBind5<T  , P1, P2, P3, P4, P5> * a = memnew( (MethodBind5<T  , P1, P2, P3, P4, P5>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5 >
class MethodBind5R : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5) ;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1])) ,r_ret)  ;
	}
#endif
	MethodBind5R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5)  ) {

	MethodBind5R <  R , P1, P2, P3, P4, P5 > * a = memnew( (MethodBind5R < R , P1, P2, P3, P4, P5 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5) ;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5) ;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
class MethodBind5R : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5) ;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1])) ,r_ret) ;
	}
#endif
	MethodBind5R () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(false);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5)  ) {

	MethodBind5R<T ,R , P1, P2, P3, P4, P5> * a = memnew( (MethodBind5R<T ,R , P1, P2, P3, P4, P5>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template<   class P1, class P2, class P3, class P4, class P5 >
class MethodBind5C : public MethodBind {

public:

	StringName type_name;
	 void (__UnexistingClass::*method)(P1, P2, P3, P4, P5) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		
		return Variant();
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]))  ;
	}
#endif
	MethodBind5C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif
		


	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5) const ) {

	MethodBind5C <    P1, P2, P3, P4, P5 > * a = memnew( (MethodBind5C <   P1, P2, P3, P4, P5 >) );
	union {

		 void (T::*sm)(P1, P2, P3, P4, P5) const;
		 void (__UnexistingClass::*dm)(P1, P2, P3, P4, P5) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T  , class P1, class P2, class P3, class P4, class P5>
class MethodBind5C : public MethodBind {
public:

	 void (T::*method)(P1, P2, P3, P4, P5) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		(instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		
		return Variant();
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		 (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1]))  ;
	}
#endif
	MethodBind5C () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif

		
	};
};

template<class T  , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind( void (T::*p_method)(P1, P2, P3, P4, P5) const ) {

	MethodBind5C<T  , P1, P2, P3, P4, P5> * a = memnew( (MethodBind5C<T  , P1, P2, P3, P4, P5>) );
	a->method=p_method;
	return a;
}
#endif

#ifndef TYPED_METHOD_BIND
template< class R , class P1, class P2, class P3, class P4, class P5 >
class MethodBind5RC : public MethodBind {

public:

	StringName type_name;
	R  (__UnexistingClass::*method)(P1, P2, P3, P4, P5) const;

#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}

	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}

	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}

#endif
	virtual String get_instance_class() const {
		return type_name;
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		__UnexistingClass *instance = (__UnexistingClass*)p_object;

		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();
		}

		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}

		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		return Variant(ret);
		
	}
#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {
		__UnexistingClass *instance = (__UnexistingClass*)p_object;
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1])) ,r_ret)  ;
	}
#endif
	MethodBind5RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif
		_set_returns(true); 


	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5) const ) {

	MethodBind5RC <  R , P1, P2, P3, P4, P5 > * a = memnew( (MethodBind5RC < R , P1, P2, P3, P4, P5 >) );
	union {

		R  (T::*sm)(P1, P2, P3, P4, P5) const;
		R  (__UnexistingClass::*dm)(P1, P2, P3, P4, P5) const;
	} u;
	u.sm=p_method;
	a->method=u.dm;
	a->type_name=T::get_class_static();
	return a;
}
#endif

#ifdef TYPED_METHOD_BIND
template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
class MethodBind5RC : public MethodBind {
public:

	R  (T::*method)(P1, P2, P3, P4, P5) const;
#ifdef DEBUG_METHODS_ENABLED
	virtual Variant::Type _gen_argument_type(int p_arg) const { return _get_argument_type(p_arg); }
	virtual GodotTypeInfo::Metadata get_argument_meta(int p_arg) const {
		if (p_arg==-1) return GetTypeInfo<R>::METADATA;
		if (p_arg==(1-1)) return GetTypeInfo<P1>::METADATA;
		if (p_arg==(2-1)) return GetTypeInfo<P2>::METADATA;
		if (p_arg==(3-1)) return GetTypeInfo<P3>::METADATA;
		if (p_arg==(4-1)) return GetTypeInfo<P4>::METADATA;
		if (p_arg==(5-1)) return GetTypeInfo<P5>::METADATA;
		
		return GodotTypeInfo::METADATA_NONE;
	}
	Variant::Type _get_argument_type(int p_argument) const {
		if (p_argument==-1) return (Variant::Type)GetTypeInfo<R>::VARIANT_TYPE;
		if (p_argument==(1-1)) return (Variant::Type)GetTypeInfo<P1>::VARIANT_TYPE;
		if (p_argument==(2-1)) return (Variant::Type)GetTypeInfo<P2>::VARIANT_TYPE;
		if (p_argument==(3-1)) return (Variant::Type)GetTypeInfo<P3>::VARIANT_TYPE;
		if (p_argument==(4-1)) return (Variant::Type)GetTypeInfo<P4>::VARIANT_TYPE;
		if (p_argument==(5-1)) return (Variant::Type)GetTypeInfo<P5>::VARIANT_TYPE;
		
		return Variant::NIL;
	}
	virtual PropertyInfo _gen_argument_type_info(int p_argument) const {
		if (p_argument==-1) return GetTypeInfo<R>::get_class_info();
		if (p_argument==(1-1)) return GetTypeInfo<P1>::get_class_info();
		if (p_argument==(2-1)) return GetTypeInfo<P2>::get_class_info();
		if (p_argument==(3-1)) return GetTypeInfo<P3>::get_class_info();
		if (p_argument==(4-1)) return GetTypeInfo<P4>::get_class_info();
		if (p_argument==(5-1)) return GetTypeInfo<P5>::get_class_info();
		
		return PropertyInfo();
	}
#endif
	virtual String get_instance_class() const {
		return T::get_class_static();
	}

	virtual Variant call(Object* p_object,const Variant** p_args,int p_arg_count, Variant::CallError& r_error) {

		T *instance=Object::cast_to<T>(p_object);
		r_error.error=Variant::CallError::CALL_OK;
#ifdef DEBUG_METHODS_ENABLED

		ERR_FAIL_COND_V(!instance,Variant());
		if (p_arg_count>get_argument_count()) {
			r_error.error=Variant::CallError::CALL_ERROR_TOO_MANY_ARGUMENTS;
			r_error.argument=get_argument_count();
			return Variant();

		}
		if (p_arg_count<(get_argument_count()-get_default_argument_count())) {

			r_error.error=Variant::CallError::CALL_ERROR_TOO_FEW_ARGUMENTS;
			r_error.argument=get_argument_count()-get_default_argument_count();
			return Variant();
		}
		CHECK_ARG(1);
		CHECK_ARG(2);
		CHECK_ARG(3);
		CHECK_ARG(4);
		CHECK_ARG(5);
		
#endif
		Variant ret = (instance->*method)(_VC(1), _VC(2), _VC(3), _VC(4), _VC(5));
		return Variant(ret);
		
	}

#ifdef PTRCALL_ENABLED
	virtual void ptrcall(Object*p_object,const void** p_args,void *r_ret) {

		T *instance=Object::cast_to<T>(p_object);
		PtrToArg<R>::encode(  (instance->*method)(PtrToArg<P1>::convert(p_args[1-1]), PtrToArg<P2>::convert(p_args[2-1]), PtrToArg<P3>::convert(p_args[3-1]), PtrToArg<P4>::convert(p_args[4-1]), PtrToArg<P5>::convert(p_args[5-1])) ,r_ret) ;
	}
#endif
	MethodBind5RC () {
#ifdef DEBUG_METHODS_ENABLED
		_set_const(true);
		_generate_argument_types(5);
#else
		set_argument_count(5);
#endif

		_set_returns(true); 
	};
};

template<class T ,class R , class P1, class P2, class P3, class P4, class P5>
MethodBind* create_method_bind(R  (T::*p_method)(P1, P2, P3, P4, P5) const ) {

	MethodBind5RC<T ,R , P1, P2, P3, P4, P5> * a = memnew( (MethodBind5RC<T ,R , P1, P2, P3, P4, P5>) );
	a->method=p_method;
	return a;
}
#endif
