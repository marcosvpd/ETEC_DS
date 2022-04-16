package com.example.project;

import static org.junit.jupiter.api.Assertions.assertEquals;

import com.example.project.*;
import org.junit.jupiter.api.Test;

class MyFirstJUnitJupiterTests {

    private final Calculator calculator = new Calculator();

    @Test
    void addition() {
        assertEquals(2, calculator.add(1, 1));
    }
	@Test
	void sub() {
		assertEquals(2, calculator.sub(4,2));
	}
	@Test
	void div() {
		assertEquals(5, calculator.div(10,2));
	}
	@Test
	void mult() {
		assertEquals(10, calculator.mult(5,2));
	}
}